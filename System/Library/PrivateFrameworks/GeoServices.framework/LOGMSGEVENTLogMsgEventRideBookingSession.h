/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying> {

	double _distanceToPickupInMeters;
	double _durationOfSessionInSeconds;
	long long _timestamp;
	GEOLatLng* _destinationBlurred;
	int _endState;
	int _endView;
	NSMutableArray* _errorMessages;
	unsigned _numberOfAvailableExtensions;
	GEOLatLng* _originBlurred;
	NSString* _rideAppId;
	NSString* _rideBookingSessionId;
	NSString* _rideType;
	BOOL _exploredOtherOptions;
	BOOL _installedApp;
	BOOL _movedPickupLocation;
	BOOL _paymentIsApplePay;
	BOOL _showedSurgePricingAlert;
	BOOL _switchedApp;
	BOOL _unavailable;
	SCD_Struct_LO102 _has;

}

@property (nonatomic,readonly) BOOL hasRideBookingSessionId; 
@property (nonatomic,retain) NSString * rideBookingSessionId;                   //@synthesize rideBookingSessionId=_rideBookingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState;                                      //@synthesize endState=_endState - In the implementation block
@property (assign,nonatomic) BOOL hasEndView; 
@property (assign,nonatomic) int endView;                                       //@synthesize endView=_endView - In the implementation block
@property (nonatomic,readonly) BOOL hasRideAppId; 
@property (nonatomic,retain) NSString * rideAppId;                              //@synthesize rideAppId=_rideAppId - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginBlurred; 
@property (nonatomic,retain) GEOLatLng * originBlurred;                         //@synthesize originBlurred=_originBlurred - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationBlurred; 
@property (nonatomic,retain) GEOLatLng * destinationBlurred;                    //@synthesize destinationBlurred=_destinationBlurred - In the implementation block
@property (assign,nonatomic) BOOL hasExploredOtherOptions; 
@property (assign,nonatomic) BOOL exploredOtherOptions;                         //@synthesize exploredOtherOptions=_exploredOtherOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasRideType; 
@property (nonatomic,retain) NSString * rideType;                               //@synthesize rideType=_rideType - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToPickupInMeters; 
@property (assign,nonatomic) double distanceToPickupInMeters;                   //@synthesize distanceToPickupInMeters=_distanceToPickupInMeters - In the implementation block
@property (assign,nonatomic) BOOL hasPaymentIsApplePay; 
@property (assign,nonatomic) BOOL paymentIsApplePay;                            //@synthesize paymentIsApplePay=_paymentIsApplePay - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfAvailableExtensions; 
@property (assign,nonatomic) unsigned numberOfAvailableExtensions;              //@synthesize numberOfAvailableExtensions=_numberOfAvailableExtensions - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedApp; 
@property (assign,nonatomic) BOOL switchedApp;                                  //@synthesize switchedApp=_switchedApp - In the implementation block
@property (assign,nonatomic) BOOL hasShowedSurgePricingAlert; 
@property (assign,nonatomic) BOOL showedSurgePricingAlert;                      //@synthesize showedSurgePricingAlert=_showedSurgePricingAlert - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfSessionInSeconds; 
@property (assign,nonatomic) double durationOfSessionInSeconds;                 //@synthesize durationOfSessionInSeconds=_durationOfSessionInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasInstalledApp; 
@property (assign,nonatomic) BOOL installedApp;                                 //@synthesize installedApp=_installedApp - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUnavailable; 
@property (assign,nonatomic) BOOL unavailable;                                  //@synthesize unavailable=_unavailable - In the implementation block
@property (assign,nonatomic) BOOL hasMovedPickupLocation; 
@property (assign,nonatomic) BOOL movedPickupLocation;                          //@synthesize movedPickupLocation=_movedPickupLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorMessages;                    //@synthesize errorMessages=_errorMessages - In the implementation block
+(Class)errorMessageType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)endState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRideAppId;
-(NSString *)rideAppId;
-(void)setRideAppId:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasRideBookingSessionId;
-(void)setEndState:(int)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(int)endView;
-(void)setEndView:(int)arg1 ;
-(void)setHasEndView:(BOOL)arg1 ;
-(BOOL)hasEndView;
-(id)endViewAsString:(int)arg1 ;
-(int)StringAsEndView:(id)arg1 ;
-(BOOL)hasOriginBlurred;
-(BOOL)hasDestinationBlurred;
-(void)setExploredOtherOptions:(BOOL)arg1 ;
-(void)setHasExploredOtherOptions:(BOOL)arg1 ;
-(BOOL)hasExploredOtherOptions;
-(BOOL)hasRideType;
-(void)setDistanceToPickupInMeters:(double)arg1 ;
-(void)setHasDistanceToPickupInMeters:(BOOL)arg1 ;
-(BOOL)hasDistanceToPickupInMeters;
-(void)setPaymentIsApplePay:(BOOL)arg1 ;
-(void)setHasPaymentIsApplePay:(BOOL)arg1 ;
-(BOOL)hasPaymentIsApplePay;
-(void)setNumberOfAvailableExtensions:(unsigned)arg1 ;
-(void)setHasNumberOfAvailableExtensions:(BOOL)arg1 ;
-(BOOL)hasNumberOfAvailableExtensions;
-(void)setSwitchedApp:(BOOL)arg1 ;
-(void)setHasSwitchedApp:(BOOL)arg1 ;
-(BOOL)hasSwitchedApp;
-(void)setShowedSurgePricingAlert:(BOOL)arg1 ;
-(void)setHasShowedSurgePricingAlert:(BOOL)arg1 ;
-(BOOL)hasShowedSurgePricingAlert;
-(void)setDurationOfSessionInSeconds:(double)arg1 ;
-(void)setHasDurationOfSessionInSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationOfSessionInSeconds;
-(void)setInstalledApp:(BOOL)arg1 ;
-(void)setHasInstalledApp:(BOOL)arg1 ;
-(BOOL)hasInstalledApp;
-(void)setUnavailable:(BOOL)arg1 ;
-(void)setHasUnavailable:(BOOL)arg1 ;
-(BOOL)hasUnavailable;
-(void)setMovedPickupLocation:(BOOL)arg1 ;
-(void)setHasMovedPickupLocation:(BOOL)arg1 ;
-(BOOL)hasMovedPickupLocation;
-(void)clearErrorMessages;
-(void)addErrorMessage:(id)arg1 ;
-(unsigned long long)errorMessagesCount;
-(id)errorMessageAtIndex:(unsigned long long)arg1 ;
-(NSString *)rideBookingSessionId;
-(void)setRideBookingSessionId:(NSString *)arg1 ;
-(GEOLatLng *)originBlurred;
-(void)setOriginBlurred:(GEOLatLng *)arg1 ;
-(GEOLatLng *)destinationBlurred;
-(void)setDestinationBlurred:(GEOLatLng *)arg1 ;
-(BOOL)exploredOtherOptions;
-(NSString *)rideType;
-(void)setRideType:(NSString *)arg1 ;
-(double)distanceToPickupInMeters;
-(BOOL)paymentIsApplePay;
-(unsigned)numberOfAvailableExtensions;
-(BOOL)switchedApp;
-(BOOL)showedSurgePricingAlert;
-(double)durationOfSessionInSeconds;
-(BOOL)installedApp;
-(BOOL)unavailable;
-(BOOL)movedPickupLocation;
-(NSMutableArray *)errorMessages;
-(void)setErrorMessages:(NSMutableArray *)arg1 ;
@end

