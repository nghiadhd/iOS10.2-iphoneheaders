/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSNumber, NSString, NSDate, CKRecordID, CKRecord;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {

	BOOL _wasCached;
	BOOL _hasSize;
	BOOL _uploaded;
	BOOL _downloaded;
	BOOL _shouldReadRawEncryptedData;
	NSURL* _fileURL;
	NSData* _signature;
	unsigned long long _size;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationCountToSave;
	NSData* _assetContent;
	NSString* _itemTypeHint;
	NSString* _UUID;
	NSURL* _downloadURL;
	NSDate* _downloadURLExpiration;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _referenceSignature;
	NSString* _uploadReceipt;
	long long _storageGroupingPolicy;
	long long _arrayIndex;
	CKRecordID* _recordID;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	NSData* _authRequest;
	NSData* _inlineData;
	NSString* _downloadBaseURL;
	unsigned long long _downloadTokenExpiration;
	long long _uploadRank;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * signature;                                        //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                   //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * fileID;                                     //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationCountToSave;                        //@synthesize generationCountToSave=_generationCountToSave - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * assetContent;                                     //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,retain) NSString * itemTypeHint;                                 //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
@property (nonatomic,readonly) NSString * assetHandleUUID; 
@property (nonatomic,retain) NSString * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSURL * downloadURL;                                     //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,retain) NSDate * downloadURLExpiration;                          //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                  //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                         //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                          //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                            //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                         //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                         //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (assign,nonatomic) long long arrayIndex;                                    //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                   //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                      //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                      //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,copy) NSData * authRequest;                                      //@synthesize authRequest=_authRequest - In the implementation block
@property (nonatomic,copy) NSData * inlineData;                                       //@synthesize inlineData=_inlineData - In the implementation block
@property (nonatomic,retain) NSString * downloadBaseURL;                              //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (assign,nonatomic) long long uploadRank;                                    //@synthesize uploadRank=_uploadRank - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(int)errorCodeFromPOSIXCode:(int)arg1 ;
+(id)assetWithFileURL:(id)arg1 ;
+(id)openWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
+(id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)UUID;
-(NSString *)owner;
-(void)setOwner:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSURL *)fileURL;
-(CKRecordID *)recordID;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3 ;
-(NSString *)assetHandleUUID;
-(void)setGenerationCountToSave:(NSNumber *)arg1 ;
-(NSData *)assetContent;
-(void)setAssetContent:(NSData *)arg1 ;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(CKRecord *)record;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSNumber *)fileID;
-(BOOL)wasCached;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(NSData *)inlineData;
-(void)setWasCached:(BOOL)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(NSString *)recordKey;
-(long long)arrayIndex;
-(void)setDownloaded:(BOOL)arg1 ;
-(BOOL)downloaded;
-(void)setArrayIndex:(long long)arg1 ;
-(long long)storageGroupingPolicy;
-(long long)uploadRank;
-(BOOL)uploaded;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSData *)referenceSignature;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(id)_initBare;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(NSString *)downloadBaseURL;
-(NSDate *)downloadURLExpiration;
-(NSData *)wrappedAssetKey;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSURL *)downloadURL;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(NSData *)authRequest;
-(unsigned long long)downloadTokenExpiration;
-(NSNumber *)generationCountToSave;
-(NSString *)itemTypeHint;
-(BOOL)shouldReadRawEncryptedData;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(void)setAuthRequest:(NSData *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(void)setDownloadURLExpiration:(NSDate *)arg1 ;
-(void)setInlineData:(NSData *)arg1 ;
-(id)openWithError:(id*)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(NSNumber *)deviceID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(NSData *)assetKey;
-(void)setAssetKey:(NSData *)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
@end

