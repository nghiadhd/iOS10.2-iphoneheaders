/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Foundation/NSOperation.h>

@protocol TSSPreset, TSKAccessControllerReadTicket;
@class UIView, NSObject, TSKDocumentRoot, NSString, TSUWeakReference;

@interface TSDSwatchRenderingOperation : NSOperation {

	UIView* mView;
	NSObject*<TSSPreset> mPreset;
	CGSize mImageSize;
	double mImageScale;
	CGRect mSwatchFrame;
	TSKDocumentRoot* mDocumentRoot;
	CGImageRef mDeliveredImage;
	unsigned long long mInsertPopoverPageType;
	unsigned long long mInsertPopoverPageNumber;
	NSString* mIdentifier;
	id<TSKAccessControllerReadTicket> mRenderingTicket;
	BOOL mWaitingToBecomeReady;
	TSUWeakReference* mWeakDelegateReference;

}

@property (retain) UIView * view; 
@property (readonly) NSObject*<TSSPreset> preset; 
@property (readonly) CGSize imageSize; 
@property (readonly) double imageScale; 
@property (readonly) CGRect swatchFrame; 
@property (readonly) TSKDocumentRoot * documentRoot; 
@property (assign) unsigned long long insertPopoverPageType; 
@property (assign) unsigned long long insertPopoverPageNumber; 
@property (copy) NSString * identifier; 
@property (assign,nonatomic) id<TSDSwatchRenderingOperationDelegate> delegate; 
@property (nonatomic,retain) id<TSKAccessControllerReadTicket> renderingTicket; 
@property (nonatomic,readonly) CGImageRef deliveredImage; 
-(void)p_applicationDidBecomeActive:(id)arg1 ;
-(void)setRenderingTicket:(id<TSKAccessControllerReadTicket>)arg1 ;
-(UIEdgeInsets)swatchEdgeInsets;
-(BOOL)needsPressedStateBackground;
-(void)p_animateSwatchIn;
-(void)p_didFinishRendering;
-(CGImageRef)p_newSwatchPressedStateBackgroundFromCGImage:(CGImageRef)arg1 ;
-(void)p_deliverResultOnMainThread:(id)arg1 ;
-(id)p_extendedRenderingTicket;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 documentRoot:(id)arg5 ;
-(id<TSKAccessControllerReadTicket>)renderingTicket;
-(void)deliverCGImage:(CGImageRef)arg1 ;
-(CGImageRef)deliveredImage;
-(unsigned long long)insertPopoverPageType;
-(void)setInsertPopoverPageType:(unsigned long long)arg1 ;
-(unsigned long long)insertPopoverPageNumber;
-(void)setInsertPopoverPageNumber:(unsigned long long)arg1 ;
-(CGRect)swatchFrame;
-(void)cancel;
-(void)setDelegate:(id<TSDSwatchRenderingOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<TSDSwatchRenderingOperationDelegate>)delegate;
-(UIView *)view;
-(NSString *)identifier;
-(void)setView:(UIView *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGSize)imageSize;
-(void)main;
-(double)imageScale;
-(NSObject*<TSSPreset>)preset;
-(TSKDocumentRoot *)documentRoot;
-(BOOL)isReady;
@end
