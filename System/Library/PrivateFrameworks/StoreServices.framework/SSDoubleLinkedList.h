/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSDoubleLinkedListNode, NSString, NSArray;

@interface SSDoubleLinkedList : NSObject {

	unsigned long long _count;
	SSDoubleLinkedListNode* _head;
	SSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                  //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(id)insertObject:(id)arg1 ;
-(NSArray *)allNodes;
-(NSString *)listIdentifier;
-(void)setListIdentifier:(NSString *)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(void)insertNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)appendNode:(id)arg1 ;
-(SSDoubleLinkedListNode *)head;
-(SSDoubleLinkedListNode *)tail;
-(void)setTail:(SSDoubleLinkedListNode *)arg1 ;
-(void)setHead:(SSDoubleLinkedListNode *)arg1 ;
@end

