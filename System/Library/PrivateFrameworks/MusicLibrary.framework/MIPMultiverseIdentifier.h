/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {

	long long _accountId;
	long long _purchaseHistoryId;
	long long _sagaId;
	long long _storeId;
	NSMutableArray* _libraryIdentifiers;
	int _mediaObjectType;
	int _mediaType;
	NSString* _name;
	SCD_Struct_MI14 _has;

}

@property (assign,nonatomic) BOOL hasMediaObjectType; 
@property (assign,nonatomic) int mediaObjectType;                              //@synthesize mediaObjectType=_mediaObjectType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                              //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                 //@synthesize sagaId=_sagaId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                      //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;              //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
+(Class)libraryIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setMediaObjectType:(int)arg1 ;
-(void)setHasMediaObjectType:(BOOL)arg1 ;
-(BOOL)hasMediaObjectType;
-(id)mediaObjectTypeAsString:(int)arg1 ;
-(int)StringAsMediaObjectType:(id)arg1 ;
-(void)setAccountId:(long long)arg1 ;
-(void)setHasAccountId:(BOOL)arg1 ;
-(BOOL)hasAccountId;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(BOOL)arg1 ;
-(BOOL)hasSagaId;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(BOOL)arg1 ;
-(BOOL)hasPurchaseHistoryId;
-(long long)accountId;
-(long long)sagaId;
-(long long)purchaseHistoryId;
-(int)mediaObjectType;
-(NSMutableArray *)libraryIdentifiers;
-(unsigned long long)libraryIdentifiersCount;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
@end

