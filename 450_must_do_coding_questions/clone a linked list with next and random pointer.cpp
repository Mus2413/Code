Node *copyList(Node *head) {
        Node *origCurr = head;
        Node *cloneCurr = NULL;
        unordered_map<Node*, Node*> mymap;
        while (origCurr != NULL)
        {
            cloneCurr = new Node(origCurr->data);
            mymap[origCurr] = cloneCurr;
            origCurr = origCurr->next;
        }
        origCurr = head;
        while (origCurr != NULL)
        {
            cloneCurr = mymap[origCurr];
            cloneCurr->next = mymap[origCurr->next];
            cloneCurr->arb = mymap[origCurr->arb];
            origCurr = origCurr->next;
        }
        return mymap[head];
}