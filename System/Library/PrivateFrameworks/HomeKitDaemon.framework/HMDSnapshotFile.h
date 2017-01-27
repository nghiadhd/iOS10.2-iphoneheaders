/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSDate, NSNumber, CAContext, HAPOSTransaction;

@interface HMDSnapshotFile : NSObject <HMFLogging> {

	BOOL _externalFilePath;
	NSString* _directory;
	NSString* _filePath;
	NSDate* _snapshotTimestamp;
	NSNumber* _slotIdentifier;
	NSNumber* _aspectRatio;
	CAContext* _snapshotContext;
	HAPOSTransaction* _createSlotIdentifierTransaction;

}

@property (nonatomic,retain) NSNumber * slotIdentifier;                                       //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,retain) CAContext * snapshotContext;                                     //@synthesize snapshotContext=_snapshotContext - In the implementation block
@property (nonatomic,retain) HAPOSTransaction * createSlotIdentifierTransaction;              //@synthesize createSlotIdentifierTransaction=_createSlotIdentifierTransaction - In the implementation block
@property (nonatomic,readonly) NSString * directory;                                          //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                                           //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSDate * snapshotTimestamp;                                    //@synthesize snapshotTimestamp=_snapshotTimestamp - In the implementation block
@property (nonatomic,readonly) NSNumber * aspectRatio;                                        //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL externalFilePath;                                         //@synthesize externalFilePath=_externalFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(CAContext *)snapshotContext;
-(NSString *)filePath;
-(NSNumber *)aspectRatio;
-(NSString *)directory;
-(NSNumber *)slotIdentifier;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(id)logIdentifier;
-(id)initWithImageDirectory:(id)arg1 ;
-(BOOL)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(BOOL)arg5 writeBack:(BOOL)arg6 ;
-(id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3 ;
-(id)setFileData:(id)arg1 snapshotTimestamp:(id)arg2 ;
-(BOOL)externalFilePath;
-(void)setCreateSlotIdentifierTransaction:(HAPOSTransaction *)arg1 ;
-(void)setSnapshotContext:(CAContext *)arg1 ;
-(CGImageRef)createSnapshotCGImageRef:(id)arg1 ;
-(id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2 ;
-(id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3 ;
-(id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2 ;
-(void)updateSlotIdentifierWithContext:(id)arg1 ;
-(NSDate *)snapshotTimestamp;
-(HAPOSTransaction *)createSlotIdentifierTransaction;
@end

