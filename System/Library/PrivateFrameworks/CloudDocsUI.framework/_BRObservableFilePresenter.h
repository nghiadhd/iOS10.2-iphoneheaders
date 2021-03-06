/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, BRObservableFile, NSString;

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	BRObservableFile* _parent;

}

@property (copy) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (assign,nonatomic,__weak) BRObservableFile * parent;                  //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(void)presentedItemUbiquityDidChange;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(BRObservableFile *)parent;
-(void)setParent:(BRObservableFile *)arg1 ;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
-(void)setPresentedItemOperationQueue:(NSOperationQueue *)arg1 ;
@end

