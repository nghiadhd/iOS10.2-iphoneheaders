/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SLYahooWebAuthIdentity : NSObject {

	NSString* _username;
	NSString* _displayName;
	NSString* _token;
	NSString* _refreshToken;
	NSString* _youTubeUsername;

}

@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSString * youTubeUsername;              //@synthesize youTubeUsername=_youTubeUsername - In the implementation block
-(NSString *)displayName;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setYouTubeUsername:(NSString *)arg1 ;
-(NSString *)youTubeUsername;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
@end

