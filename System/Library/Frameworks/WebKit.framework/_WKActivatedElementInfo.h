/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, UIImage;

@interface _WKActivatedElementInfo : NSObject {

	RetainPtr<NSURL>* _URL;
	RetainPtr<NSString>* _title;
	CGPoint _interactionLocation;
	RetainPtr<NSString>* _ID;
	RefPtr<WebKit::ShareableBitmap>* _image;
	RetainPtr<UIImage>* _uiImage;
	long long _type;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) CGPoint _interactionLocation; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,copy,readonly) UIImage * image; 
-(NSString *)title;
-(long long)type;
-(UIImage *)image;
-(NSURL *)URL;
-(CGRect)boundingRect;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 location:(CGPoint)arg3 title:(id)arg4 ID:(id)arg5 rect:(CGRect)arg6 image:(ShareableBitmap*)arg7 ;
-(CGPoint)_interactionLocation;
-(NSString *)ID;
@end

