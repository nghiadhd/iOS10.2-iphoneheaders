/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <NanoMailKitServer/NNMKAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding> {

	BOOL _renderOnClient;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL renderOnClient;              //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                 //@synthesize imageSize=_imageSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)renderOnClient;
-(void)setRenderOnClient:(BOOL)arg1 ;
@end

