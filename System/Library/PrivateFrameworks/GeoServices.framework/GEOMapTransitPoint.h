/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE26 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE49 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE26* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(SCD_Struct_GE49)boundingRect;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(double)distanceInMetersFrom:(SCD_Struct_GE26)arg1;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE26*)polygonPoints;
-(long long)polygonPointsCount;
-(SCD_Struct_GE26)coordinate;

@end

