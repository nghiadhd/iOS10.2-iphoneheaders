/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarkerLayer.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>

@protocol VKAnnotation;
@class NSString;

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <VKTrackableAnnotationPresentation> {

	id<VKAnnotation> _annotation;
	BOOL _tracking;
	BOOL _animatingToCoordinate;
	CGSize _presentationCoordinate;
	SCD_Struct_VK278 _styleTransitionState;

}

@property (nonatomic,retain) id<VKAnnotation> annotation;                        //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) SCD_Struct_VK281 styleTransitionState;              //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (assign,getter=isTracking,nonatomic) BOOL tracking; 
@property (assign,nonatomic) BOOL animatingToCoordinate;                         //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(id<VKAnnotation>)annotation;
-(void)setAnnotation:(id<VKAnnotation>)arg1 ;
-(void)setStyleTransitionState:(SCD_Struct_VK281)arg1 ;
-(SCD_Struct_VK281)styleTransitionState;
-(BOOL)animatingToCoordinate;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(CGSize)presentationCoordinate;
-(id)initWithAnnotation:(id)arg1 ;
@end

