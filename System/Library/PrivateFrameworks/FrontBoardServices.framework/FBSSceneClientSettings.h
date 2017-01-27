/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSString, BSSettings;

@interface FBSSceneClientSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	double _preferredLevel;
	long long _preferredInterfaceOrientation;
	NSSet* _occlusions;
	NSString* _preferredSceneHostIdentifier;
	BSSettings* _otherSettings;

}

@property (nonatomic,readonly) double preferredLevel;                                     //@synthesize preferredLevel=_preferredLevel - In the implementation block
@property (nonatomic,readonly) long long preferredInterfaceOrientation;                   //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * occlusions;                                   //@synthesize occlusions=_occlusions - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredSceneHostIdentifier;              //@synthesize preferredSceneHostIdentifier=_preferredSceneHostIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isMutable;
+(id)settings;
-(BOOL)isUISubclass;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)otherSettings;
-(double)preferredLevel;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)preferredSceneHostIdentifier;
-(NSSet *)occlusions;
-(long long)preferredInterfaceOrientation;
@end

