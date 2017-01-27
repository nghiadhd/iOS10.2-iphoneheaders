/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSURL;

@interface _MFMessageMediaPayload : NSObject <NSSecureCoding> {

	BOOL _isSticker;
	NSString* _text;
	UIImage* _image;
	NSURL* _mediaURL;
	NSString* _accessibilityLabel;

}

@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                         //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL isSticker;                           //@synthesize isSticker=_isSticker - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSURL *)mediaURL;
-(BOOL)isSticker;
-(void)setIsSticker:(BOOL)arg1 ;
@end

