/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAssetHandle, NTPBResourceRecord, FCInterestToken, NSString, NSURL, NSDate;

@interface FCResource : NSObject {

	FCAssetHandle* _assetHandle;
	NTPBResourceRecord* _resourceRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBResourceRecord * resourceRecord;              //@synthesize resourceRecord=_resourceRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * resourceID; 
@property (nonatomic,readonly) NSString * mimeType; 
@property (nonatomic,readonly) FCAssetHandle * assetHandle;                    //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL; 
@property (getter=isOnDisk,nonatomic,readonly) BOOL onDisk; 
@property (nonatomic,readonly) NSDate * fetchedDate; 
@property (nonatomic,readonly) NSString * changeTag; 
-(NSString *)mimeType;
-(NSURL *)fileURL;
-(NSString *)resourceID;
-(NSString *)changeTag;
-(NTPBResourceRecord *)resourceRecord;
-(FCAssetHandle *)assetHandle;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3 ;
-(BOOL)isOnDisk;
-(NSDate *)fetchedDate;
-(void)setResourceRecord:(NTPBResourceRecord *)arg1 ;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
@end

