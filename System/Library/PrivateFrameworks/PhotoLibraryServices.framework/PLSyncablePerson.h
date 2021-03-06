/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLSyncablePerson <NSObject>
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (assign,nonatomic) BOOL verified; 
@required
-(NSString *)personUUID;
-(void)setPersonUUID:(id)arg1;
-(BOOL)verified;
-(void)setVerified:(BOOL)arg1;
-(void)setFullName:(id)arg1;
-(NSString *)fullName;

@end

