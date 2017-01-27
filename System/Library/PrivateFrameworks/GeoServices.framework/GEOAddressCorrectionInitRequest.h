/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	NSString* _personID;
	NSString* _token;
	BOOL _supportsMultipleAddresses;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses;                 //@synthesize supportsMultipleAddresses=_supportsMultipleAddresses - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasToken;
-(BOOL)hasPersonID;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(BOOL)supportsMultipleAddresses;
@end

