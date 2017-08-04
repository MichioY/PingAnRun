//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath, PARSMessageDetailInfo, UIButton, UIControl, UIImageView, UILabel, UIView;

@interface PARSMsgDetailBaseCell : UITableViewCell
{
    _Bool _isSelected;
    _Bool _isEditing;
    UIButton *_cellSelectBtn;
    NSIndexPath *_indexPath;
    id <DetailInfoCellDeleteBtnDelegate> _delegate;
    UILabel *_showContentLabel;
    UIButton *_showBtn;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_icon;
    UILabel *_dateLabel;
    UIControl *_backView;
    UIImageView *_noContentImg;
    UILabel *_noReadDot;
    UILabel *_lookDetailLabel;
    UIImageView *_lookImg;
    UIView *_sepLine;
    UIView *_cellContainView;
    PARSMessageDetailInfo *_msgDetailInfo;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) PARSMessageDetailInfo *msgDetailInfo; // @synthesize msgDetailInfo=_msgDetailInfo;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIView *cellContainView; // @synthesize cellContainView=_cellContainView;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIImageView *lookImg; // @synthesize lookImg=_lookImg;
@property(retain, nonatomic) UILabel *lookDetailLabel; // @synthesize lookDetailLabel=_lookDetailLabel;
@property(retain, nonatomic) UILabel *noReadDot; // @synthesize noReadDot=_noReadDot;
@property(retain, nonatomic) UIImageView *noContentImg; // @synthesize noContentImg=_noContentImg;
@property(retain, nonatomic) UIControl *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *showBtn; // @synthesize showBtn=_showBtn;
@property(retain, nonatomic) UILabel *showContentLabel; // @synthesize showContentLabel=_showContentLabel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id <DetailInfoCellDeleteBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIButton *cellSelectBtn; // @synthesize cellSelectBtn=_cellSelectBtn;
- (void).cxx_destruct;
- (void)updateTitleFrameWithNoRead:(long long)arg1;
- (void)updateTitleFrameWith:(long long)arg1;
- (void)showBtnClicked:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (double)getLineNum:(id)arg1 font:(id)arg2 labelWidth:(double)arg3;
- (id)changeToAttributeString:(id)arg1;
- (void)updateStatus:(_Bool)arg1;
- (void)hideReadRemarkWith:(id)arg1;
- (void)setupSubViews;
- (void)updateMsgReadStateWithData:(id)arg1;
- (void)updateCellContainView:(_Bool)arg1;
- (void)updateWithInfo:(id)arg1 isShow:(_Bool)arg2 contentHeight:(double)arg3;
- (void)updateWithInfo:(id)arg1 contentHeight:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
