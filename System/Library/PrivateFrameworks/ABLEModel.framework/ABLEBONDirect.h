/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONDirect : NSObject {

	NSArray* _bonArray;
	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
@property (readonly) NSArray * bonArray;                                                //@synthesize bonArray=_bonArray - In the implementation block
+(id)bonDirect;
+(id)bonDirectWithArray:(id)arg1 ;
-(float)lookupForBatteryLevel:(float)arg1 ;
-(id)initWithJsonResource:(id)arg1 ;
-(id)initBonDirectWithArray:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(NSArray *)bonArray;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end

