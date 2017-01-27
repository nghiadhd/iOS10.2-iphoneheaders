/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {

	NSString* _model;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
+(id)sharedInstance;
+(id)marketingNameForModel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)model;
-(void)_generateProductInformation;
-(NSString *)productName;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productBuildVersion;
-(NSString *)productVersion;
@end

