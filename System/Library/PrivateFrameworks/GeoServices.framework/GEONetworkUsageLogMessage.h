/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEONetworkUsageLogMessage : PBCodable <NSCopying> {

	long long _requestErrorCode;
	int _connectionType;
	int _networkService;
	int _placeRequestType;
	int _requestDataSize;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	int _responseDataSize;
	int _responseTime;
	NSMutableArray* _tileSetUsages;
	BOOL _isConnectedToCarplay;
	SCD_Struct_GE83 _has;

}

@property (assign,nonatomic) BOOL hasNetworkService; 
@property (assign,nonatomic) int networkService;                              //@synthesize networkService=_networkService - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize;                             //@synthesize requestDataSize=_requestDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize;                            //@synthesize responseDataSize=_responseDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime;                                //@synthesize responseTime=_responseTime - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                   //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode;                      //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription;              //@synthesize requestErrorDescription=_requestErrorDescription - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                              //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSetUsages;                  //@synthesize tileSetUsages=_tileSetUsages - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                            //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (assign,nonatomic) BOOL hasIsConnectedToCarplay; 
@property (assign,nonatomic) BOOL isConnectedToCarplay;                       //@synthesize isConnectedToCarplay=_isConnectedToCarplay - In the implementation block
+(Class)tileSetUsageType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(BOOL)hasRequestErrorDescription;
-(int)requestDataSize;
-(int)responseDataSize;
-(int)responseTime;
-(NSString *)requestErrorDomain;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(long long)requestErrorCode;
-(NSString *)requestErrorDescription;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(int)networkService;
-(void)setNetworkService:(int)arg1 ;
-(void)setHasNetworkService:(BOOL)arg1 ;
-(BOOL)hasNetworkService;
-(id)networkServiceAsString:(int)arg1 ;
-(int)StringAsNetworkService:(id)arg1 ;
-(void)clearTileSetUsages;
-(void)addTileSetUsage:(id)arg1 ;
-(unsigned long long)tileSetUsagesCount;
-(id)tileSetUsageAtIndex:(unsigned long long)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setHasIsConnectedToCarplay:(BOOL)arg1 ;
-(BOOL)hasIsConnectedToCarplay;
-(NSMutableArray *)tileSetUsages;
-(void)setTileSetUsages:(NSMutableArray *)arg1 ;
-(BOOL)isConnectedToCarplay;
@end
