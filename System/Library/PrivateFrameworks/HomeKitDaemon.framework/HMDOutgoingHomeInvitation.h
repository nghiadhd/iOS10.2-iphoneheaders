/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDUser, NSString, NSArray, NSUUID;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation {

	BOOL _responseReceived;
	HMDUser* _user;
	NSString* _inviteeDestinationAddress;
	NSArray* _operations;
	NSUUID* _messageIdentifier;

}

@property (nonatomic,retain) NSString * inviteeDestinationAddress;                     //@synthesize inviteeDestinationAddress=_inviteeDestinationAddress - In the implementation block
@property (nonatomic,retain) NSArray * operations;                                     //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitationsInformation; 
@property (nonatomic,readonly) HMDUser * user;                                         //@synthesize user=_user - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (assign,nonatomic) BOOL responseReceived;                                    //@synthesize responseReceived=_responseReceived - In the implementation block
@property (nonatomic,readonly) NSUUID * messageIdentifier;                             //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(BOOL)isComplete;
-(id)describeWithFormat;
-(HMDUser *)user;
-(BOOL)responseReceived;
-(NSString *)inviteeDestinationAddress;
-(id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5 ;
-(void)invitationRemovedDuringMerge;
-(BOOL)mergeWithInvitation:(id)arg1 ;
-(NSArray *)accessoryInvitationsInformation;
-(void)setInviteeDestinationAddress:(NSString *)arg1 ;
-(void)setResponseReceived:(BOOL)arg1 ;
-(NSUUID *)messageIdentifier;
@end

