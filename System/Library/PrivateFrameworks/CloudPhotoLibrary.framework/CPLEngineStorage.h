/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, CPLEngineStore, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {

	BOOL _superWasCalled;
	CPLPlatformObject* _platformObject;
	CPLEngineStore* _engineStore;
	NSString* _name;

}

@property (nonatomic,readonly) CPLEngineStore * engineStore;                    //@synthesize engineStore=_engineStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(NSString *)description;
-(NSString *)name;
-(id)status;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(CPLPlatformObject *)platformObject;
-(CPLEngineStore *)engineStore;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)_checkSuperWasCalled;
-(id)statusDictionary;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
@end

