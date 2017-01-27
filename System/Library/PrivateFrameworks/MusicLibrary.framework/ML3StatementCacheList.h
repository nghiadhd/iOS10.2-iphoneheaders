/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject {

	ML3StatementCacheNode* _firstNode;
	ML3StatementCacheNode* _lastNode;

}

@property (nonatomic,readonly) ML3StatementCacheNode * firstNode;              //@synthesize firstNode=_firstNode - In the implementation block
@property (nonatomic,readonly) ML3StatementCacheNode * lastNode;               //@synthesize lastNode=_lastNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)description;
-(ML3StatementCacheNode *)firstNode;
-(void)appendNode:(id)arg1 ;
-(void)promoteNodeWithDictionaryKey:(id)arg1 ;
-(id)oldestNode;
-(void)deleteOldestNode;
-(void)deleteAllNodes;
-(ML3StatementCacheNode *)lastNode;
@end

