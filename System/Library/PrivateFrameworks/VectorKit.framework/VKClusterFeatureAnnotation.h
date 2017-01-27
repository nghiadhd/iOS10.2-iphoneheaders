/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKCustomFeatureAnnotation.h>

@class VKCustomFeature, NSString;

@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {

	CGSize _coordinate;
	VKCustomFeature* _customFeature;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
-(void)dealloc;
-(id)feature;
-(id)initWithClusterNode:(ClusterTreeClusterNode*)arg1 clusterTree:(const shared_ptr<md::LabelClusterTree>*)arg2 baseStyle:(id)arg3 annotationText:(id)arg4 annotationLocale:(id)arg5 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
@end

