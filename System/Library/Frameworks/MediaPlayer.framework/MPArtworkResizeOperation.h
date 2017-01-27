/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSURL, NSObject, NSError, UIImage;

@interface MPArtworkResizeOperation : NSOperation {

	BOOL _usesExactFittingSizeAsDestinationSize;
	NSURL* _destinationURL;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSError* _error;
	UIImage* _resizedImage;
	UIImage* _image;
	CGSize _scaledFittingSize;

}

@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize scaledFittingSize;                                   //@synthesize scaledFittingSize=_scaledFittingSize - In the implementation block
@property (assign,nonatomic) BOOL usesExactFittingSizeAsDestinationSize;                 //@synthesize usesExactFittingSizeAsDestinationSize=_usesExactFittingSizeAsDestinationSize - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) UIImage * resizedImage;                                   //@synthesize resizedImage=_resizedImage - In the implementation block
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)main;
-(CGSize)scaledFittingSize;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 destinationURL:(id)arg4 ;
-(NSObject*<OS_dispatch_group>)operationGroup;
-(UIImage *)resizedImage;
-(NSURL *)destinationURL;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 destinationURL:(id)arg3 ;
-(CGSize)_resizedScaledSizeForScaledImageSize:(CGSize)arg1 scaledFittingSize:(CGSize)arg2 ;
-(BOOL)usesExactFittingSizeAsDestinationSize;
-(void)setScaledFittingSize:(CGSize)arg1 ;
-(void)setUsesExactFittingSizeAsDestinationSize:(BOOL)arg1 ;
-(NSError *)error;
@end

