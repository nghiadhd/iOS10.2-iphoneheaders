/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <kbd/kbd-Structs.h>
#import <kbd/TIRemoteDataProtocol.h>

@class TITextCheckerExemptions, NSString;

@interface TIRemoteDataHandle : NSObject <TIRemoteDataProtocol> {

	TITextCheckerExemptions* _textCheckerExemptions;

}

@property (nonatomic,readonly) TITextCheckerExemptions * textCheckerExemptions;              //@synthesize textCheckerExemptions=_textCheckerExemptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldAcceptRequestForMeCardWithAuditToken:(SCD_Struct_TI0)arg1 ;
+(id)localDictionaryPath;
+(id)localizedStringForKey:(id)arg1 ;
-(void)dismissDialogWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)removeAllDynamicDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestTextCheckerLocalDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)string:(id)arg1 isExemptFromTextCheckerWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)appendWordToTextCheckerLocalDictionary:(id)arg1 ;
-(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performTrainingForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(TITextCheckerExemptions *)textCheckerExemptions;
-(void)requestMeCardWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestMeContactWithCompletionHandler:(/*^block*/id)arg1 ;
@end

