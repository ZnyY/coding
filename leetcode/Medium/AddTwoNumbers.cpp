//https://leetcode.com/problems/add-two-numbers/
//author:zhangyi
#include <bits/stdc++.h>
using namespace std ;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
}*head1 = new ListNode(0) , *head2 = new ListNode(0);
class Solution {
public:
    /*int getnum(ListNode* head){
        int sum = 0 , cnt = 1 ;
        while (head->next != nullptr){
            sum += head->next->val * cnt ;
            cnt *= 10 ;
            head = head->next ;
        }
        return sum ;
    }*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode((l1->val + l2->val)%10) ;
        ListNode* p = head ;
        int rmd = (l1->val + l2->val) / 10 ; 
        l1 = l1->next , l2 = l2->next ;
        while (l1 != nullptr || l2 != nullptr){
            p->next = new ListNode(rmd) ;
            p = p->next ;
            if (l1 != nullptr){
                p->val += l1->val ;
                l1 = l1->next ;
            }
            if (l2 != nullptr){
                p->val += l2->val ;
                l2 = l2->next ;
            }
            rmd = p->val / 10 ;
            p->val %= 10 ;
        }
        if (rmd > 0)
            p->next = new ListNode(rmd) ;
        //cout << getnum(head) ;
        return head ;
    }
};
int main(){
    //Test Module :

    /*int n1 = 3 , n2 = 3 ;
    ListNode *p , *q ;
    while (n1--){
        q = new ListNode(0) ;
        cin >> q->val ;
        if (head1->next == nullptr)
            head1->next = q ;
        else 
            p->next = q ;
        p = q ;
    }
    if (head1->next != nullptr)
        q->next = nullptr ;
    p = nullptr , q = nullptr ;
    while (n2--){
        q = new ListNode(0) ;
        cin >> q->val ;
        if (head2->next == nullptr)
            head2->next = q ;
        else 
            p->next = q ;
        p = q ;
    }
    if (head2->next != nullptr)
        q->next = nullptr ;
    Solution A ;
    A.addTwoNumbers(head1 , head2) ;
    return 0 ;*/
}