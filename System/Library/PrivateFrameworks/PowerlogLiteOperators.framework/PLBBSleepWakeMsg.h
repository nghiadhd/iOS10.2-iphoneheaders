/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSString, NSData, NSDictionary, NSNumber, NSMutableDictionary;

@interface PLBBSleepWakeMsg : PLBBMsgRoot {

	NSString* _swReason;
	NSString* _bbWakeChannel;
	NSString* _bbWakeType;
	NSString* _bbWakeSubType;
	NSData* _bbWakeDataBin;
	NSDictionary* _bbWakeDataParsed;
	NSString* _qmiSvcType;
	NSString* _qmiClntId;
	NSString* _qmiMsgId;
	NSString* _qmiMsgType;
	NSString* _qmiLen;
	NSString* _ariGroupId;
	NSString* _ariMsgId;
	NSString* _ariMsgName;
	NSString* _ariLen;
	NSString* _ariSeqNum;
	NSString* _swAtCmd;
	NSString* _swRawData;
	NSNumber* _swSvcId;
	NSString* _swClientId;
	NSString* _swMsgId;
	NSString* _swMsgType;
	NSString* _swCmdName;
	NSString* _swCmdFullName;
	NSDictionary* _swIpData;
	NSString* _swRadioClass;
	NSString* _swCTData;
	NSString* _swChan;
	NSString* _swCmd;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
@property (retain) NSString * swReason;                                     //@synthesize swReason=_swReason - In the implementation block
@property (retain) NSString * bbWakeChannel;                                //@synthesize bbWakeChannel=_bbWakeChannel - In the implementation block
@property (retain) NSString * bbWakeType;                                   //@synthesize bbWakeType=_bbWakeType - In the implementation block
@property (retain) NSString * bbWakeSubType;                                //@synthesize bbWakeSubType=_bbWakeSubType - In the implementation block
@property (retain) NSData * bbWakeDataBin;                                  //@synthesize bbWakeDataBin=_bbWakeDataBin - In the implementation block
@property (retain) NSDictionary * bbWakeDataParsed;                         //@synthesize bbWakeDataParsed=_bbWakeDataParsed - In the implementation block
@property (retain) NSString * qmiSvcType;                                   //@synthesize qmiSvcType=_qmiSvcType - In the implementation block
@property (retain) NSString * qmiClntId;                                    //@synthesize qmiClntId=_qmiClntId - In the implementation block
@property (retain) NSString * qmiMsgId;                                     //@synthesize qmiMsgId=_qmiMsgId - In the implementation block
@property (retain) NSString * qmiMsgType;                                   //@synthesize qmiMsgType=_qmiMsgType - In the implementation block
@property (retain) NSString * qmiLen;                                       //@synthesize qmiLen=_qmiLen - In the implementation block
@property (retain) NSString * ariGroupId;                                   //@synthesize ariGroupId=_ariGroupId - In the implementation block
@property (retain) NSString * ariMsgId;                                     //@synthesize ariMsgId=_ariMsgId - In the implementation block
@property (retain) NSString * ariMsgName;                                   //@synthesize ariMsgName=_ariMsgName - In the implementation block
@property (retain) NSString * ariLen;                                       //@synthesize ariLen=_ariLen - In the implementation block
@property (retain) NSString * ariSeqNum;                                    //@synthesize ariSeqNum=_ariSeqNum - In the implementation block
@property (retain) NSString * swAtCmd;                                      //@synthesize swAtCmd=_swAtCmd - In the implementation block
@property (retain) NSString * swRawData;                                    //@synthesize swRawData=_swRawData - In the implementation block
@property (retain) NSNumber * swSvcId;                                      //@synthesize swSvcId=_swSvcId - In the implementation block
@property (retain) NSString * swClientId;                                   //@synthesize swClientId=_swClientId - In the implementation block
@property (retain) NSString * swMsgId;                                      //@synthesize swMsgId=_swMsgId - In the implementation block
@property (retain) NSString * swMsgType;                                    //@synthesize swMsgType=_swMsgType - In the implementation block
@property (retain) NSString * swCmdName;                                    //@synthesize swCmdName=_swCmdName - In the implementation block
@property (retain) NSString * swCmdFullName;                                //@synthesize swCmdFullName=_swCmdFullName - In the implementation block
@property (retain) NSDictionary * swIpData;                                 //@synthesize swIpData=_swIpData - In the implementation block
@property (retain) NSString * swRadioClass;                                 //@synthesize swRadioClass=_swRadioClass - In the implementation block
@property (retain) NSString * swCTData;                                     //@synthesize swCTData=_swCTData - In the implementation block
@property (retain) NSString * swChan;                                       //@synthesize swChan=_swChan - In the implementation block
@property (retain) NSString * swCmd;                                        //@synthesize swCmd=_swCmd - In the implementation block
+(id)entryEventPointDefinitionSleepWakeActivityMavABM;
+(id)entryEventPointDefinitionSleepWakeActivityIceABM;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSString *)bbWakeChannel;
-(NSDictionary *)bbWakeDataParsed;
-(NSString *)bbWakeType;
-(NSData *)bbWakeDataBin;
-(NSString *)bbWakeSubType;
-(void)refreshSleepWakeActivity;
-(void)logEventPointSleepWakeABM;
-(NSString *)swReason;
-(void)setSwReason:(NSString *)arg1 ;
-(void)setBbWakeChannel:(NSString *)arg1 ;
-(void)setBbWakeType:(NSString *)arg1 ;
-(void)setBbWakeSubType:(NSString *)arg1 ;
-(void)setBbWakeDataBin:(NSData *)arg1 ;
-(void)setBbWakeDataParsed:(NSDictionary *)arg1 ;
-(NSString *)qmiSvcType;
-(void)setQmiSvcType:(NSString *)arg1 ;
-(NSString *)qmiClntId;
-(void)setQmiClntId:(NSString *)arg1 ;
-(NSString *)qmiMsgId;
-(void)setQmiMsgId:(NSString *)arg1 ;
-(NSString *)qmiMsgType;
-(void)setQmiMsgType:(NSString *)arg1 ;
-(NSString *)qmiLen;
-(void)setQmiLen:(NSString *)arg1 ;
-(NSString *)ariGroupId;
-(void)setAriGroupId:(NSString *)arg1 ;
-(NSString *)ariMsgId;
-(void)setAriMsgId:(NSString *)arg1 ;
-(NSString *)ariMsgName;
-(void)setAriMsgName:(NSString *)arg1 ;
-(NSString *)ariLen;
-(void)setAriLen:(NSString *)arg1 ;
-(NSString *)ariSeqNum;
-(void)setAriSeqNum:(NSString *)arg1 ;
-(NSString *)swAtCmd;
-(void)setSwAtCmd:(NSString *)arg1 ;
-(NSString *)swRawData;
-(void)setSwRawData:(NSString *)arg1 ;
-(NSNumber *)swSvcId;
-(void)setSwSvcId:(NSNumber *)arg1 ;
-(NSString *)swClientId;
-(void)setSwClientId:(NSString *)arg1 ;
-(NSString *)swMsgId;
-(void)setSwMsgId:(NSString *)arg1 ;
-(NSString *)swMsgType;
-(void)setSwMsgType:(NSString *)arg1 ;
-(NSString *)swCmdName;
-(void)setSwCmdName:(NSString *)arg1 ;
-(NSString *)swCmdFullName;
-(void)setSwCmdFullName:(NSString *)arg1 ;
-(NSDictionary *)swIpData;
-(void)setSwIpData:(NSDictionary *)arg1 ;
-(NSString *)swRadioClass;
-(void)setSwRadioClass:(NSString *)arg1 ;
-(NSString *)swCTData;
-(void)setSwCTData:(NSString *)arg1 ;
-(NSString *)swChan;
-(void)setSwChan:(NSString *)arg1 ;
-(NSString *)swCmd;
-(void)setSwCmd:(NSString *)arg1 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
@end

