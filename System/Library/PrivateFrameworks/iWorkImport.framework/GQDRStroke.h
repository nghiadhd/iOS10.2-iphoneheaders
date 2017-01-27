/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDColor, GQDRStrokePattern, NSString;

@interface GQDRStroke : NSObject <GQDNameMappable> {

	float mMiterLimit;
	float mWidth;
	int mCap;
	int mJoin;
	GQDColor* mColor;
	GQDRStrokePattern* mPattern;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(float)miterLimit;
-(id)color;
-(float)width;
-(id)pattern;
-(int)cap;
-(int)join;
@end

