/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IKStyleMediaQuery : NSObject {

	NSString* _identifier;
	BOOL _isNegated;
	NSString* _mediaType;
	NSDictionary* _featureValues;

}

@property (nonatomic,readonly) BOOL isNegated;                                   //@synthesize isNegated=_isNegated - In the implementation block
@property (nonatomic,retain,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureValues;              //@synthesize featureValues=_featureValues - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)mediaQueryListWithCSSMediaQuery:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(BOOL)arg3 ;
-(BOOL)isNegated;
-(NSDictionary *)featureValues;
-(NSString *)mediaType;
@end

