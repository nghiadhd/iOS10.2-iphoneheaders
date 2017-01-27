/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding> {

	BOOL _asSender;
	unsigned long long _context;
	NSData* _secret;
	SCD_Struct_KC0* _send;
	SCD_Struct_KC0* _receive;

}

@property (assign) BOOL asSender;                           //@synthesize asSender=_asSender - In the implementation block
@property (assign) unsigned long long context;              //@synthesize context=_context - In the implementation block
@property (retain) NSData * secret;                         //@synthesize secret=_secret - In the implementation block
@property (assign) SCD_Struct_KC0* send;                    //@synthesize send=_send - In the implementation block
@property (assign) SCD_Struct_KC0* receive;                 //@synthesize receive=_receive - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2 ;
+(id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(SCD_Struct_KC0*)send;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setSend:(SCD_Struct_KC0*)arg1 ;
-(NSData *)secret;
-(void)setSecret:(NSData *)arg1 ;
-(void)finalize;
-(id)decryptAndVerify:(id)arg1 error:(id*)arg2 ;
-(id)encrypt:(id)arg1 error:(id*)arg2 ;
-(id)initAsSender:(id)arg1 context:(unsigned long long)arg2 ;
-(id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2 ;
-(BOOL)asSender;
-(id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(BOOL)arg3 ;
-(void)setAsSender:(BOOL)arg1 ;
-(void)setReceive:(SCD_Struct_KC0*)arg1 ;
-(SCD_Struct_KC0*)receive;
-(unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2 ;
-(BOOL)GCM:(const ccmode_gcm*)arg1 context:(SCD_Struct_KC0*)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char*)arg5 processed:(char*)arg6 tag:(char*)arg7 error:(id*)arg8 ;
@end

