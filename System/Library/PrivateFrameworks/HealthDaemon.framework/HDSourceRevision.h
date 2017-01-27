/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject {

	HDSourceEntity* _sourceEntity;
	NSString* _sourceRevision;

}

@property (nonatomic,readonly) HDSourceEntity * sourceEntity;              //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (nonatomic,readonly) NSString * sourceRevision;                  //@synthesize sourceRevision=_sourceRevision - In the implementation block
-(NSString *)sourceRevision;
-(HDSourceEntity *)sourceEntity;
-(id)initWithSource:(id)arg1 sourceRevision:(id)arg2 ;
@end

