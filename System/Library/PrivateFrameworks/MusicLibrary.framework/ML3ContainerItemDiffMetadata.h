/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ML3ContainerItemDiffMetadata : NSObject {

	long long _persistentID;
	long long _containerPersistentID;
	long long _itemPersistentID;
	long long _newPosition;
	long long _previousPosition;

}

@property (assign,nonatomic) long long persistentID;                       //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long containerPersistentID;              //@synthesize containerPersistentID=_containerPersistentID - In the implementation block
@property (assign,nonatomic) long long itemPersistentID;                   //@synthesize itemPersistentID=_itemPersistentID - In the implementation block
@property (assign,nonatomic) long long newPosition;                        //@synthesize newPosition=_newPosition - In the implementation block
@property (assign,nonatomic) long long previousPosition;                   //@synthesize previousPosition=_previousPosition - In the implementation block
+(id)diffMetadataWithPersistentID:(long long)arg1 ;
+(id)diffMetadataWithPersistentID:(long long)arg1 containerPersistentID:(long long)arg2 itemPersistentID:(long long)arg3 newPosition:(long long)arg4 previousPosition:(long long)arg5 ;
-(void)setPersistentID:(long long)arg1 ;
-(long long)newPosition;
-(long long)previousPosition;
-(void)setContainerPersistentID:(long long)arg1 ;
-(void)setItemPersistentID:(long long)arg1 ;
-(void)setNewPosition:(long long)arg1 ;
-(void)setPreviousPosition:(long long)arg1 ;
-(long long)containerPersistentID;
-(long long)persistentID;
-(long long)itemPersistentID;
@end

