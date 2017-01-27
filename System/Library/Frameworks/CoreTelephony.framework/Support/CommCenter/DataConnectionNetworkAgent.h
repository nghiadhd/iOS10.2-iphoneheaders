/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface DataConnectionNetworkAgent : NSObject <NWNetworkAgent> {

	DataConnectionAgentData _agentData;
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	BOOL networkProvider;
	BOOL specificUseOnly;
	int _connectionType;
	NSUUID* agentUUID;
	NSString* agentDescription;
	DataConnectionAgent* _dataAgent;

}

@property (readonly) int connectionType;                                                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign) DataConnectionAgent* dataAgent;                                       //@synthesize dataAgent=_dataAgent - In the implementation block
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(BOOL)allowStartAgentForOptions:(id)arg1 ;
-(DataConnectionAgentData*)getAgentData;
-(DataConnectionAgent*)dataAgent;
-(void)setDataAgent:(DataConnectionAgent*)arg1 ;
-(BOOL)isActive;
-(BOOL)isPersistent;
-(id)initWithType:(int)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(int)connectionType;
-(id)copyAgentData;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1 ;
@end

