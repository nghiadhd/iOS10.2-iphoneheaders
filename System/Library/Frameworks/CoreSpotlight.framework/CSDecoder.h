/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSDecoder : NSObject <CSCoderData> {

	const CFAllocatorRef _contentDeallocator;
	NSData* _data;
	SCD_Struct_CS2 _obj;

}

@property (nonatomic,readonly) const CFAllocatorRef contentDeallocator;              //@synthesize contentDeallocator=_contentDeallocator - In the implementation block
@property (nonatomic,readonly) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS3 obj;                                   //@synthesize obj=_obj - In the implementation block
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)decodeObjectNoCopy:(SCD_Struct_CS3)arg1 ;
-(id)initWithData:(id)arg1 obj:(SCD_Struct_CS3)arg2 ;
-(const CFAllocatorRef)contentDeallocator;
-(id)decodeObject:(SCD_Struct_CS3)arg1 ;
-(SCD_Struct_CS3)obj;
@end

