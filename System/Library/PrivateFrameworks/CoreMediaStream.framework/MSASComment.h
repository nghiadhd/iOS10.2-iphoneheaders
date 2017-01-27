/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MSASComment : NSObject {

	BOOL _isLike;
	BOOL _isCaption;
	BOOL _isBatchComment;
	BOOL _isDeletable;
	BOOL _isMine;
	int _ID;
	NSString* _GUID;
	NSDate* _timestamp;
	NSDate* _clientTimestamp;
	NSString* _personID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _email;
	NSString* _content;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (assign,nonatomic) int ID;                                  //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * clientTimestamp;                //@synthesize clientTimestamp=_clientTimestamp - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL isLike;                             //@synthesize isLike=_isLike - In the implementation block
@property (assign,nonatomic) BOOL isCaption;                          //@synthesize isCaption=_isCaption - In the implementation block
@property (assign,nonatomic) BOOL isBatchComment;                     //@synthesize isBatchComment=_isBatchComment - In the implementation block
@property (nonatomic,retain) NSString * content;                      //@synthesize content=_content - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)MSASPCommentFromProtocolDictionary:(id)arg1 ;
+(id)comment;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(NSString *)content;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setClientTimestamp:(NSDate *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setIsBatchComment:(BOOL)arg1 ;
-(void)setIsCaption:(BOOL)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(BOOL)isBatchComment;
-(BOOL)isLike;
-(void)setIsLike:(BOOL)arg1 ;
-(BOOL)isMine;
-(BOOL)isDeletable;
-(NSDate *)clientTimestamp;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isCaption;
-(NSString *)firstName;
-(NSString *)lastName;
-(int)ID;
-(NSString *)email;
-(void)setFullName:(NSString *)arg1 ;
-(void)setID:(int)arg1 ;
-(NSString *)fullName;
-(NSString *)GUID;
-(void)setEmail:(NSString *)arg1 ;
@end

