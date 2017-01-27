/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAssetRepresentationDownloadOperationDelegate;
@class NSError, PHAssetRepresentation, NSRecursiveLock, NSURL;

@interface PHAssetRepresentationDownloadOperation : NSOperation {

	BOOL finished;
	BOOL executing;
	BOOL _userInitiated;
	BOOL _failed;
	int _imageRequestID;
	NSError* _error;
	id<PHAssetRepresentationDownloadOperationDelegate> _delegate;
	PHAssetRepresentation* _representation;
	NSRecursiveLock* _statusLock;
	double _progress;
	NSURL* _identifierURL;

}

@property (getter=isFailed) BOOL failed;                                                                      //@synthesize failed=_failed - In the implementation block
@property (retain) NSError * error;                                                                           //@synthesize error=_error - In the implementation block
@property (getter=isFinished) BOOL finished; 
@property (getter=isExecuting) BOOL executing; 
@property (retain) NSRecursiveLock * statusLock;                                                              //@synthesize statusLock=_statusLock - In the implementation block
@property (assign) double progress;                                                                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) int imageRequestID;                                                              //@synthesize imageRequestID=_imageRequestID - In the implementation block
@property (nonatomic,retain) NSURL * identifierURL;                                                           //@synthesize identifierURL=_identifierURL - In the implementation block
@property (getter=isUserInitiated) BOOL userInitiated;                                                        //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetRepresentationDownloadOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHAssetRepresentation * representation;                                          //@synthesize representation=_representation - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<PHAssetRepresentationDownloadOperationDelegate>)arg1 ;
-(id<PHAssetRepresentationDownloadOperationDelegate>)delegate;
-(PHAssetRepresentation *)representation;
-(void)setProgress:(double)arg1 ;
-(void)start;
-(void)setUserInitiated:(BOOL)arg1 ;
-(double)progress;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(NSURL *)identifierURL;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)initWithRepresentation:(id)arg1 ;
-(BOOL)isFailed;
-(BOOL)isUserInitiated;
-(void)setRepresentation:(PHAssetRepresentation *)arg1 ;
-(void)setStatusLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)statusLock;
-(void)setImageRequestID:(int)arg1 ;
-(int)imageRequestID;
-(void)setExecuting:(BOOL)arg1 ;
@end

