/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>

@class VKCustomFeature, NSString;

@interface _MAMapSnippetCustomFeature : NSObject <MKCustomFeatureAnnotation> {

	VKCustomFeature* _feature;
	SCD_Struct_MA0 _coordinate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_MA0 coordinate; 
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
-(id)feature;
-(BOOL)showsBalloonCallout;
-(id)initWithCustomFeature:(id)arg1 coordinate:(SCD_Struct_MA0)arg2 ;
-(void)setCoordinate:(SCD_Struct_MA0)arg1 ;
-(SCD_Struct_MA0)coordinate;
@end

