/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMutableDictionary, NSArray, BRCAccountSession;

@interface BRCProgress : NSProgress {

	NSMutableDictionary* _progressByAliasContainerID;
	BOOL _published;
	NSArray* _parentFileIDs;
	BRCAccountSession* _session;
	char _group;

}

@property (nonatomic,readonly) NSArray * parentFileIDs;              //@synthesize parentFileIDs=_parentFileIDs - In the implementation block
@property (nonatomic,readonly) BOOL isPublished;                     //@synthesize published=_published - In the implementation block
+(id)_progressForDocument:(id)arg1 group:(char)arg2 sizeInfo:(id)arg3 ;
+(id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
+(id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
-(BOOL)isPublished;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)brc_publish;
-(void)brc_unpublish;
-(id)initWithGroup:(char)arg1 parentFileIDs:(id)arg2 session:(id)arg3 ;
-(void)addAliasItem:(id)arg1 ;
-(NSArray *)parentFileIDs;
@end

