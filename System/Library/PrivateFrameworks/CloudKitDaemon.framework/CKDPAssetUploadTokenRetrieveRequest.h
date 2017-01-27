/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {

	NSMutableArray* _assets;
	CKDPRecordFieldIdentifier* _field;
	CKDPRecordType* _type;
	NSMutableArray* _uploads;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploads;                       //@synthesize uploads=_uploads - In the implementation block
+(id)options;
+(Class)assetsType;
+(Class)uploadsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)field;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasType;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasField;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assets;
-(unsigned long long)assetsCount;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
-(void)setUploads:(NSMutableArray *)arg1 ;
-(void)addUploads:(id)arg1 ;
-(unsigned long long)uploadsCount;
-(void)clearUploads;
-(id)uploadsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)uploads;
@end

