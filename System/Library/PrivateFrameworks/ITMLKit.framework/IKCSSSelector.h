/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IKCSSSelector : NSObject {

	long long _type;
	NSString* _name;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)stringValue;
@end

