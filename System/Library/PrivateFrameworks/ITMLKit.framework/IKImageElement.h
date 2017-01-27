/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>
#import <libobjc.A.dylib/IKAppDocumentStyleChangeObserving.h>

@class NSDictionary, NSURL, NSArray, UIImage, TVImageProxy, UIColor, NSString;

@interface IKImageElement : IKViewElement <IKAppDocumentStyleChangeObserving> {

	double _srcWidth;
	double _srcHeight;
	NSDictionary* _srcset;
	unsigned long long _imageType;
	NSURL* _resolvedURL;
	NSArray* _srcsetRules;

}

@property (nonatomic,readonly) BOOL tv_isResource; 
@property (nonatomic,readonly) UIImage * tv_resourceImage; 
@property (nonatomic,readonly) TVImageProxy * tv_imageProxy; 
@property (nonatomic,readonly) CGSize tv_imageScaleToSize; 
@property (nonatomic,readonly) long long tv_imageType; 
@property (nonatomic,retain) NSURL * resolvedURL;                          //@synthesize resolvedURL=_resolvedURL - In the implementation block
@property (nonatomic,retain) NSArray * srcsetRules;                        //@synthesize srcsetRules=_srcsetRules - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSDictionary * srcset;               //@synthesize srcset=_srcset - In the implementation block
@property (nonatomic,retain,readonly) NSURL * placeholderURL; 
@property (nonatomic,readonly) unsigned long long imageType;               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) unsigned long long position; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) long long fill; 
@property (nonatomic,readonly) long long reflect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldParseChildDOMElements;
-(long long)tv_imageType;
-(CGSize)tv_imageScaleToSize;
-(TVImageProxy *)tv_imageProxy;
-(void)_imageProxy:(id*)arg1 andScaleToSize:(CGSize*)arg2 ;
-(BOOL)tv_isResource;
-(UIImage *)tv_resourceImage;
-(id)tv_associatedViewElement;
-(NSURL *)url;
-(long long)fill;
-(unsigned long long)position;
-(double)width;
-(double)height;
-(UIColor *)borderColor;
-(NSURL *)resolvedURL;
-(unsigned long long)imageType;
-(void)appDocumentDidMarkStylesDirty;
-(void)_parseSrcset:(id)arg1 ;
-(unsigned long long)_imageTypeForTagName:(id)arg1 ;
-(NSArray *)srcsetRules;
-(NSURL *)placeholderURL;
-(long long)reflect;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(void)setSrcsetRules:(NSArray *)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSDictionary *)srcset;
@end

