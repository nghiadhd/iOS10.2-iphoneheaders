/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class EDWorkbook, EDSheet, NSMutableDictionary;

@interface EMState : CMState {

	EDWorkbook* _workbook;
	EDSheet* _currentSheet;
	NSMutableDictionary* _hyperlinks;

}

@property (retain) EDWorkbook * workbook;               //@synthesize workbook=_workbook - In the implementation block
@property (assign) EDSheet * currentSheet;              //@synthesize currentSheet=_currentSheet - In the implementation block
-(void)dealloc;
-(EDSheet *)currentSheet;
-(EDWorkbook *)workbook;
-(id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(void)setWorkbook:(EDWorkbook *)arg1 ;
-(void)setCurrentSheet:(EDSheet *)arg1 ;
-(void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3 ;
@end

