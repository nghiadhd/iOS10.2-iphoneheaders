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

@class NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable <NSCopying> {

	long long _blurredBookingTimestamp;
	long long _blurredReservationTimestamp;
	double _durationOfSessionInSeconds;
	unsigned long long _muid;
	NSString* _bookTableAppId;
	NSString* _bookTableSessionId;
	int _endState;
	int _endView;
	NSMutableArray* _errorMessages;
	NSString* _installNeededTappedAppId;
	unsigned _tableSize;
	BOOL _addedSpecialRequest;
	BOOL _installCompleted;
	BOOL _installNeeded;
	BOOL _swipedAvailableTimes;
	BOOL _tappedDatePicker;
	SCD_Struct_GE17 _has;

}

@property (nonatomic,readonly) BOOL hasBookTableSessionId; 
@property (nonatomic,retain) NSString * bookTableSessionId;                      //@synthesize bookTableSessionId=_bookTableSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState;                                       //@synthesize endState=_endState - In the implementation block
@property (assign,nonatomic) BOOL hasEndView; 
@property (assign,nonatomic) int endView;                                        //@synthesize endView=_endView - In the implementation block
@property (nonatomic,readonly) BOOL hasBookTableAppId; 
@property (nonatomic,retain) NSString * bookTableAppId;                          //@synthesize bookTableAppId=_bookTableAppId - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                            //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasBlurredReservationTimestamp; 
@property (assign,nonatomic) long long blurredReservationTimestamp;              //@synthesize blurredReservationTimestamp=_blurredReservationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBlurredBookingTimestamp; 
@property (assign,nonatomic) long long blurredBookingTimestamp;                  //@synthesize blurredBookingTimestamp=_blurredBookingTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfSessionInSeconds; 
@property (assign,nonatomic) double durationOfSessionInSeconds;                  //@synthesize durationOfSessionInSeconds=_durationOfSessionInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasInstallNeeded; 
@property (assign,nonatomic) BOOL installNeeded;                                 //@synthesize installNeeded=_installNeeded - In the implementation block
@property (nonatomic,readonly) BOOL hasInstallNeededTappedAppId; 
@property (nonatomic,retain) NSString * installNeededTappedAppId;                //@synthesize installNeededTappedAppId=_installNeededTappedAppId - In the implementation block
@property (assign,nonatomic) BOOL hasInstallCompleted; 
@property (assign,nonatomic) BOOL installCompleted;                              //@synthesize installCompleted=_installCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasTableSize; 
@property (assign,nonatomic) unsigned tableSize;                                 //@synthesize tableSize=_tableSize - In the implementation block
@property (assign,nonatomic) BOOL hasAddedSpecialRequest; 
@property (assign,nonatomic) BOOL addedSpecialRequest;                           //@synthesize addedSpecialRequest=_addedSpecialRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSwipedAvailableTimes; 
@property (assign,nonatomic) BOOL swipedAvailableTimes;                          //@synthesize swipedAvailableTimes=_swipedAvailableTimes - In the implementation block
@property (assign,nonatomic) BOOL hasTappedDatePicker; 
@property (assign,nonatomic) BOOL tappedDatePicker;                              //@synthesize tappedDatePicker=_tappedDatePicker - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorMessages;                     //@synthesize errorMessages=_errorMessages - In the implementation block
+(Class)errorMessageType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)endState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
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
-(void)setDurationOfSessionInSeconds:(double)arg1 ;
-(void)setHasDurationOfSessionInSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationOfSessionInSeconds;
-(void)clearErrorMessages;
-(void)addErrorMessage:(id)arg1 ;
-(unsigned long long)errorMessagesCount;
-(id)errorMessageAtIndex:(unsigned long long)arg1 ;
-(double)durationOfSessionInSeconds;
-(NSMutableArray *)errorMessages;
-(void)setErrorMessages:(NSMutableArray *)arg1 ;
-(BOOL)hasBookTableSessionId;
-(BOOL)hasBookTableAppId;
-(void)setBlurredReservationTimestamp:(long long)arg1 ;
-(void)setHasBlurredReservationTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlurredReservationTimestamp;
-(void)setBlurredBookingTimestamp:(long long)arg1 ;
-(void)setHasBlurredBookingTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlurredBookingTimestamp;
-(void)setInstallNeeded:(BOOL)arg1 ;
-(void)setHasInstallNeeded:(BOOL)arg1 ;
-(BOOL)hasInstallNeeded;
-(BOOL)hasInstallNeededTappedAppId;
-(void)setInstallCompleted:(BOOL)arg1 ;
-(void)setHasInstallCompleted:(BOOL)arg1 ;
-(BOOL)hasInstallCompleted;
-(void)setTableSize:(unsigned)arg1 ;
-(void)setHasTableSize:(BOOL)arg1 ;
-(BOOL)hasTableSize;
-(void)setAddedSpecialRequest:(BOOL)arg1 ;
-(void)setHasAddedSpecialRequest:(BOOL)arg1 ;
-(BOOL)hasAddedSpecialRequest;
-(void)setSwipedAvailableTimes:(BOOL)arg1 ;
-(void)setHasSwipedAvailableTimes:(BOOL)arg1 ;
-(BOOL)hasSwipedAvailableTimes;
-(void)setTappedDatePicker:(BOOL)arg1 ;
-(void)setHasTappedDatePicker:(BOOL)arg1 ;
-(BOOL)hasTappedDatePicker;
-(NSString *)bookTableSessionId;
-(void)setBookTableSessionId:(NSString *)arg1 ;
-(NSString *)bookTableAppId;
-(void)setBookTableAppId:(NSString *)arg1 ;
-(long long)blurredReservationTimestamp;
-(long long)blurredBookingTimestamp;
-(BOOL)installNeeded;
-(NSString *)installNeededTappedAppId;
-(void)setInstallNeededTappedAppId:(NSString *)arg1 ;
-(BOOL)installCompleted;
-(unsigned)tableSize;
-(BOOL)addedSpecialRequest;
-(BOOL)swipedAvailableTimes;
-(BOOL)tappedDatePicker;
@end

