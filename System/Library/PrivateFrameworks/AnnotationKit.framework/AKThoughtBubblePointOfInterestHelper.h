/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKThoughtBubblePointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(double)minOutset;
+(double)maxOutset;
+(CGPoint)_constrainPointyPointToOutset:(CGPoint)arg1 forAnnotation:(id)arg2 outsetIsMin:(BOOL)arg3 ;
@end

