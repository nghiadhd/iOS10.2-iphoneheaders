/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject {

	IMDoubleLinkedListNode* _first;
	IMDoubleLinkedListNode* _last;
	unsigned long long _count;

}

@property (retain) IMDoubleLinkedListNode * first;              //@synthesize first=_first - In the implementation block
@property (retain) IMDoubleLinkedListNode * last;               //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(void)appendObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(void)appendLinkedListNode:(id)arg1 ;
-(IMDoubleLinkedListNode *)first;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeLinkedListNode:(id)arg1 ;
-(void)pushLinkedListNode:(id)arg1 ;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(IMDoubleLinkedListNode *)last;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
@end

