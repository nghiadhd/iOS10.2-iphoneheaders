/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSCache, NSManagedObjectID, NSMutableArray;

@interface ICAttachmentImageLoadingOperation : NSOperation {

	short _attachmentType;
	NSURL* _mediaURL;
	NSCache* _cache;
	NSManagedObjectID* _mediaObjectID;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSCache * cache;                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * mediaObjectID;                //@synthesize mediaObjectID=_mediaObjectID - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) short attachmentType;                             //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(NSCache *)cache;
-(void)main;
-(void)setCache:(NSCache *)arg1 ;
-(/*^block*/id)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSURL *)mediaURL;
-(short)attachmentType;
-(void)setMediaObjectID:(NSManagedObjectID *)arg1 ;
-(void)setAttachmentType:(short)arg1 ;
-(NSManagedObjectID *)mediaObjectID;
-(id)initWithCache:(id)arg1 media:(id)arg2 attachmentType:(short)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeCompletionHandler:(/*^block*/id)arg1 cancelIfNoneLeft:(BOOL)arg2 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
@end

