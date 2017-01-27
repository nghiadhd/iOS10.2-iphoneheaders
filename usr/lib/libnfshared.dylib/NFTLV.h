/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray;

@interface NFTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)TLVWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(NSData *)value;
-(unsigned)tag;
-(id)valueAsString;
-(NSArray *)children;
-(unsigned short)valueAsUnsignedShort;
-(unsigned)valueAsUnsignedLong;
-(id)asData;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)childrenWithTag:(unsigned)arg1 ;
-(id)childWithTag:(unsigned)arg1 ;
@end

