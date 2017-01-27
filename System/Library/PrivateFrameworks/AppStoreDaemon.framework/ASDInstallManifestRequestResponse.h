/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDInstallManifestRequestResponse : ASDRequestResponse {

	BOOL _success;
	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL success;                   //@synthesize success=_success - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)results;
-(id)initWithResults:(id)arg1 ;
-(BOOL)success;
@end
