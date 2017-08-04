//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class NSDictionary, NSFileManager, NSMutableArray, NSString, ZipArchive;

@interface QuestionView : UIView <UIAlertViewDelegate>
{
    NSMutableArray *contenViews;
    int currentIndex;
    NSMutableArray *results;
    _Bool isFinished;
    int maxQuestion;
    ZipArchive *_zip;
    NSFileManager *manager;
    NSString *filePath;
    id <QuestionViewDelegate> delegate;
    NSDictionary *_jsonDic;
}

@property(retain, nonatomic) NSDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
@property(nonatomic) int maxQuestion; // @synthesize maxQuestion;
@property(nonatomic) __weak id <QuestionViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setCurrentQuestion:(id)arg1;
- (void)addForResult:(id)arg1;
- (void)zipArchiveRecording:(id)arg1 QuestionId:(id)arg2 Num:(id)arg3;
- (void)zipQuestionAnswers;
- (void)FailedQuestion:(id)arg1 andCurrent:(id)arg2;
- (void)saveData;
- (void)dealloc;
- (void)nextAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
