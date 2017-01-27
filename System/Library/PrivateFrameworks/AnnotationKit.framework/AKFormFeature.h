/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying> {

	AKPageController* _page;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic,__weak) AKPageController * page;              //@synthesize page=_page - In the implementation block
+(id)featureWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(AKPageController *)page;
-(void)setPage:(AKPageController *)arg1 ;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
@end

