#pragma once
#include"ListNode.h"
#include<vector>


class ListRandomAccess {
private:
	std::vector<ListNode*> Nodes;
	int len = 0;
public:
	ListRandomAccess(ListNode* head) {
		while (head) {
			Nodes.push_back(head);
			head = head->next;
		}
		len = Nodes.size();
	}

	/** Returns a random node's value. */
	int getRandom() {
		return Nodes[rand() % len]->val;
	}
};

/**
* Your Solution object will be instantiated and called as such:
* Solution obj = new Solution(head);
* int param_1 = obj.getRandom();
*/